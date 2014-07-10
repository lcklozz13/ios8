/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKNode.h>

@class SCNNode, SCNScene;

@interface SK3DNode : SKNode
{
    id <SCNRenderer> _scnRenderer;
    struct SCNVector3 _originalCameraPosition;
    SCNScene *_scene;
    _Bool playing;
    _Bool loops;
    _Bool autoenablesDefaultLighting;
    double sceneTime;
    SCNNode *pointOfView;
}

+ (id)nodeWithViewportSize:(struct CGSize)arg1;
@property(nonatomic) _Bool autoenablesDefaultLighting; // @synthesize autoenablesDefaultLighting;
@property(retain, nonatomic) SCNNode *pointOfView; // @synthesize pointOfView;
@property(nonatomic) _Bool loops; // @synthesize loops;
@property(getter=isPlaying) _Bool playing; // @synthesize playing;
@property(nonatomic) double sceneTime; // @synthesize sceneTime;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_renderForTime:(double)arg1;
-     // Error parsing type: 32@0:816, name: unprojectPoint:
-     // Error parsing type: 32@0:816, name: projectPoint:
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
@property(retain, nonatomic) SCNScene *scnScene;
@property struct CGSize viewportSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize)arg1;
- (id)init;
- (void)commonInit;

@end
