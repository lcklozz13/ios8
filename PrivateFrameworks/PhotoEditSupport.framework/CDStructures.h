/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char blue;
    unsigned char green;
    unsigned char red;
    unsigned char alpha;
} CDStruct_76a42933;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    struct CGPoint _field1[2];
    float _field2;
    _Bool _field3;
} CDStruct_defeeb22;

typedef struct {
    CDStruct_818bb265 _field1;
    CDStruct_818bb265 _field2;
    CDStruct_818bb265 _field3;
} CDStruct_9b5b21f5;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
    float *_field3;
    float _field4;
    int _field5;
    int _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    struct CGPoint _field13;
    struct CGPoint _field14;
    float _field15;
    int _field16;
    int _field17;
    int _field18;
    int _field19;
} CDStruct_74df0099;
