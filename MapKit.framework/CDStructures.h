/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CADoublePoint {
    double x;
    double y;
};

struct CADoubleRect {
    struct CADoublePoint origin;
    struct CADoubleSize size;
};

struct CADoubleSize {
    double width;
    double height;
};

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct UIEdgeInsets {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct _GEOTileKey {
    unsigned int :6;
    unsigned int :26;
    unsigned int :26;
    unsigned int :6;
    unsigned int :8;
    unsigned int :8;
    unsigned int :8;
    unsigned int :1;
    unsigned int :7;
    unsigned char _field1[4];
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    id _field5;
    char _field6;
} CDStruct_dc034332;

typedef struct {
    int _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_411ed4d8;

typedef struct {
    CDStruct_34734122 origin;
    CDStruct_8caa76fc size;
} CDStruct_02837cd9;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double width;
    double height;
} CDStruct_8caa76fc;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;

