/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MotionDetectorDelegate.h"
#import "WeChat-Structs.h"
#import "MMObject.h"

@class MotionDetector, NSString;

@interface UploadDetectLogic : MMObject <MotionDetectorDelegate> {
	int _retryTimes;
	CGSize _qmpSize;
	int _motionState;
	bool _isForOcr;
	MotionDetector* _motionDetector;
	int _uploadTimes;
	BOOL _canUpload;
	timeval _lastProcessTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int motionState;
@property(assign, nonatomic) int retryTimes;
-(void).cxx_destruct;
-(void)feedbackCameraFocused;
-(void)feedbackMotionStateChanged:(int)changed;
-(void)uploadRetry;
-(void)cancelUpload;
-(void)didUpload;
-(BOOL)canUpload;
-(void)process:(char*)process;
-(void)stop;
-(void)start;
-(void)dealloc;
-(id)init;
-(id)initWithFocusEngineSize:(CGSize)focusEngineSize IsForOcr:(bool)ocr;
@end
