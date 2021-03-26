const jwt = require('jsonwebtoken');
const { modelName } = require('../models/user');

module.exports = (req, res, next) => {
    const authHeader = req.get('Authorization');
    if (!authHeader) {
        const error = new Error('Not authenticated');
        error.statuscode = 401;
        throw error;
    }
    const token = req.get('Authorization').split(' ')[1];
    let decodedToken;
    try {
        decodedToken = jwt.verify(token, 'secret');

    } catch (err) {
        err.statuscode = 500;
        throw err;
    }
    if (!decodedToken) {
        const error = new Error('Not Authenticated');
        error.statuscode = 400;
        throw error;
    }
    req.userId = decodedToken.userId;
    next();
} 