/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PLCameraControllerDelegate <NSObject>

@optional
- (void)captureController:(id)arg1 didOutputPanoramaCaptureParameters:(id)arg2;
- (void)captureControllerPanoramaConfigurationChanged:(id)arg1;
- (void)captureController:(id)arg1 didFinishPanoramaRequest:(id)arg2 withResponse:(id)arg3;
- (void)captureController:(id)arg1 didStopProcessingForPanoramaRequest:(id)arg2;
- (void)captureController:(id)arg1 didStartProcessingForPanoramaRequest:(id)arg2;
- (void)captureController:(id)arg1 didStopCapturingForPanoramaRequest:(id)arg2;
- (void)captureController:(id)arg1 didStartCapturingForPanoramaRequest:(id)arg2;
- (void)captureController:(id)arg1 didFinishRecordingForVideoRequest:(id)arg2 withResponse:(id)arg3;
- (void)captureController:(id)arg1 didStopRecordingForVideoRequest:(id)arg2;
- (void)captureController:(id)arg1 didStartRecordingForVideoRequest:(id)arg2;
- (void)cameraControllerDidChangeHDRSuggestion:(id)arg1;
- (void)cameraController:(id)arg1 didFinishTransitionToShowEffectsGrid:(_Bool)arg2;
- (void)cameraController:(id)arg1 didStartTransitionToShowEffectsGrid:(_Bool)arg2 animated:(_Bool)arg3;
- (void)cameraController:(id)arg1 willTransitionToShowEffectsGrid:(_Bool)arg2;
- (void)cameraControllerDidChangeEffectFilterIndex:(id)arg1;
- (void)cameraControllerTorchAvailabilityChanged:(id)arg1;
- (void)cameraControllerTorchActiveChanged:(id)arg1;
- (void)cameraControllerFlashWillFireChanged:(id)arg1;
- (void)cameraController:(id)arg1 videoZoomFactorDidChange:(double)arg2;
- (void)cameraController:(id)arg1 faceMetadataDidChange:(id)arg2;
- (void)cameraControllerDidChangeExposureTargetBias:(id)arg1;
- (void)cameraControllerDidChangeUserLockedExposure:(id)arg1;
- (void)cameraControllerDidChangeUserLockedFocus:(id)arg1;
- (void)cameraController:(id)arg1 willResetFocus:(_Bool)arg2 exposure:(_Bool)arg3;
- (void)cameraControllerExposureDidEnd:(id)arg1;
- (void)cameraControllerExposureDidStart:(id)arg1;
- (void)cameraControllerFocusDidEnd:(id)arg1;
- (void)cameraControllerFocusDidStart:(id)arg1;
- (void)cameraControllerDidChangeExposureMode:(id)arg1;
- (void)cameraControllerDidChangeFocusMode:(id)arg1;
- (void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3;
- (void)cameraControllerDidStopVideoCapture:(id)arg1;
- (void)cameraControllerVideoCaptureDidStart:(id)arg1;
- (void)cameraController:(id)arg1 capturedPanorama:(id)arg2 error:(id)arg3;
- (void)cameraControllerPanoramaDidStopProcessing:(id)arg1;
- (void)cameraControllerPanoramaWillStartProcessing:(id)arg1;
- (void)cameraControllerWillStopPanoramaCapture:(id)arg1;
- (void)cameraControllerDidStartPanoramaCapture:(id)arg1;
- (void)cameraController:(id)arg1 didReceivePanoramaIssue:(int)arg2;
- (void)cameraController:(id)arg1 didUpdatePanoramaPreview:(id)arg2;
- (void)cameraControllerDidChangePanoramaConfiguration:(id)arg1;
- (void)cameraController:(id)arg1 didChangeCaptureAbility:(_Bool)arg2;
- (void)cameraController:(id)arg1 capturedPhoto:(id)arg2 error:(id)arg3;
- (void)cameraControllerDidTakePhoto:(id)arg1;
- (void)cameraControllerWillTakePhoto:(id)arg1;
- (void)cameraControllerModeDidChange:(id)arg1;
- (void)cameraController:(id)arg1 willChangeToMode:(long long)arg2 device:(long long)arg3;
- (void)cameraController:(id)arg1 cleanApertureDidChange:(struct CGRect)arg2;
- (void)cameraControllerServerDied:(id)arg1;
- (void)cameraControllerSessionInterruptionEnded:(id)arg1;
- (void)cameraControllerSessionWasInterrupted:(id)arg1;
- (void)cameraControllerSessionDidStop:(id)arg1;
- (void)cameraControllerWillStopSession:(id)arg1;
- (void)cameraControllerDidStopSession:(id)arg1;
- (void)cameraControllerSessionDidStart:(id)arg1;
- (void)cameraControllerPreviewDidStart:(id)arg1;
- (void)cameraControllerWillStartPreview:(id)arg1;
- (void)cameraControllerDidStartSession:(id)arg1;
- (void)cameraControllerDidSetupSession:(id)arg1;
@end

