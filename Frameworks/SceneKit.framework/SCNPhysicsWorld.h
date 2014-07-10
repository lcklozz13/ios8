/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, SCNPhysicsContact, SCNScene;

// Not exported
@interface SCNPhysicsWorld : NSObject <NSSecureCoding>
{
    id _reserved;
    struct btDiscreteDynamicsWorld *_world;
    struct btOverlappingPairCallback *_ghostPairCallback;
    struct btVehicleRaycaster *_vehicleRayCaster;
    struct btC3DDebugDraw *_debugDrawer;
    struct c3dAether _aether;
    _Bool _hasActiveFields;
    id <SCNPhysicsContactDelegate> _contactDelegate;
    SCNPhysicsContact *_contact;
    SCNScene *_scene;
    struct SCNVector3 _gravity;
    double _speed;
    double _scale;
    double _timeStep;
    NSMutableArray *_fields;
    double _elapsedTime;
    NSMutableArray *_behaviors;
}

+ (_Bool)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNPhysicsWorld:(id)arg1;
- (void)_customDecodingOfSCNPhysicsWorld:(id)arg1;
- (void)_customEncodingOfSCNPhysicsWorld:(id)arg1;
- (void)_drawDebugInAuthoringEnvironment:(void *)arg1;
- (void)_postCommandWithBlock:(id)arg1;
- (struct btDynamicsWorld *)handle;
- (void)setScene:(id)arg1;
- (id)scene;
- (void)_allowGhostObjects;
- (struct btDynamicsWorld *)_handle;
- (struct btVehicleRaycaster *)_defaultVehicleRayCaster;
- (void)_step:(double)arg1;
- (struct c3dAether *)_aetherHandle;
- (void)_removeFieldFromWorld:(id)arg1;
- (void)_addFieldToWorld:(id)arg1;
- (_Bool)_needsRedraw;
- (void)updateCollisionPairs;
- (id)convexSweepTestWithShape:(id)arg1 fromTransform:(struct SCNMatrix4)arg2 toTransform:(struct SCNMatrix4)arg3 options:(id)arg4;
- (id)contactTestWithBody:(id)arg1 options:(id)arg2;
- (id)contactTestBetweenBody:(id)arg1 andBody:(id)arg2 options:(id)arg3;
- (id)_rayTestWithSegmentFromPoint:(struct btVector3)arg1 toPoint:(struct btVector3)arg2 options:(id)arg3;
- (id)rayTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)allBehaviors;
- (void)removeAllBehaviors;
- (void)removeBehavior:(id)arg1;
- (void)addBehavior:(id)arg1;
@property id <SCNPhysicsContactDelegate> contactDelegate;
@property(nonatomic) double timeStep;
- (double)scale;
- (void)setScale:(double)arg1;
@property(nonatomic) double speed;
@property(nonatomic) struct SCNVector3 gravity;
- (void)sceneWillDie;
- (void)dealloc;
- (id)initWithScene:(id)arg1;
- (id)_physicsContact;
- (void)_createDynamicWorld;
- (void)_preTick:(double)arg1;

@end
