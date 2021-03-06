/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMTipsViewControllerDelegate.h"
#import "IVOIPModeSwitchExt.h"
#import "AVVideoDeviceDelegate.h"
#import "SmallCameraViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "MMUIView.h"
#import "IVOIPExt.h"
#import "VOIPVideoToVoiceViewDelegate.h"

@class VoipDescriptionButton, SmallCameraView, AVCaptureVideoPreviewLayer, MMHDHeadImageView, VOIPVideoToVoiceView, UILabel, UIView, UIImageView, NSString, MMTimerLabel, UIButton, CContact, AVAudioPlayer, VOIPVideoRender, MMTipsView;
@protocol VideoVoipTalkingViewDelegate;

@interface VideoVoipTalkingView : MMUIView <MMTipsViewControllerDelegate, SmallCameraViewDelegate, AVVideoDeviceDelegate, IVOIPModeSwitchExt, IVOIPExt, VOIPVideoToVoiceViewDelegate, UIAlertViewDelegate> {
	CContact* _contact;
	int _status;
	UIView* _backgroundView;
	MMTimerLabel* _timer;
	UIView* _bigCameraView;
	UIView* _peerRenderView;
	UILabel* _voiceTipsLabel;
	MMTipsView* m_tipsView;
	BOOL _isMyselfInMainView;
	BOOL _isEndCall;
	AVAudioPlayer* _player;
	UIImageView* m_localDefaultView;
	UIImageView* m_remoteDefaultView;
	MMHDHeadImageView* m_localHeadView;
	MMHDHeadImageView* m_remoteHeadView;
	UILabel* m_myNameLabel;
	UILabel* m_remoteNameLabel;
	BOOL m_imIs2GWhenConnectToOldVersion;
	BOOL m_remoteIs2GWhenConnectToOldVersion;
	UIView* m_timerBackgroundView;
	UIView* m_footerView;
	VOIPVideoRender* m_peerRender;
	VOIPVideoRender* m_localRender;
	VOIPVideoRender* m_smallPeerRender;
	BOOL m_allowVideo;
	VOIPVideoToVoiceView* m_videoToVoiceView;
	AVCaptureVideoPreviewLayer* m_previewLayer;
	BOOL m_hasEncounterBackgroundCameraStart;
	id<NSObject, VideoVoipTalkingViewDelegate> _delegate;
	VoipDescriptionButton* m_flipCameraView;
	SmallCameraView* m_smallCameraView;
	UIView* m_blurView;
	VoipDescriptionButton* m_voiceModeButton;
	VoipDescriptionButton* m_hangupBtn;
	UIView* m_cameraClipView;
	UIView* m_smallRenderView;
	UIView* m_smallRenderBackClipView;
	UIButton* m_minimizeButton;
	int _m_videoOrientation;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int m_videoOrientation;
@property(assign, nonatomic) BOOL m_hasEncounterBackgroundCameraStart;
@property(retain, nonatomic) UIView* m_smallRenderBackClipView;
@property(retain, nonatomic) UIView* m_smallRenderView;
@property(retain, nonatomic) UIView* m_cameraClipView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer* m_previewLayer;
@property(retain, nonatomic) VOIPVideoToVoiceView* m_videoToVoiceView;
@property(retain, nonatomic) VOIPVideoRender* m_smallPeerRender;
@property(retain, nonatomic) VOIPVideoRender* m_localRender;
@property(retain, nonatomic) VOIPVideoRender* m_peerRender;
@property(retain, nonatomic) UIButton* m_minimizeButton;
@property(retain, nonatomic) VoipDescriptionButton* m_hangupBtn;
@property(retain, nonatomic) VoipDescriptionButton* m_voiceModeButton;
@property(retain, nonatomic) UIView* m_blurView;
@property(retain, nonatomic) UIView* m_footerView;
@property(retain, nonatomic) UIView* m_timerBackgroundView;
@property(retain, nonatomic) SmallCameraView* m_smallCameraView;
@property(retain, nonatomic) VoipDescriptionButton* m_flipCameraView;
@property(assign, nonatomic) id<NSObject, VideoVoipTalkingViewDelegate> delegate;
-(void).cxx_destruct;
-(void)onClickTipsBtn:(unsigned)btn;
-(BOOL)isAllowVideo;
-(void)onVoiceViewOpenSpeaker;
-(void)onVoiceViewOpenMic;
-(void)onVoiceViewHangup;
-(void)onVoiceViewCloseSpeaker;
-(void)onVoiceViewCloseMic;
-(void)onClickMinimizeButton;
-(BOOL)isInitWithVideoMode;
-(void)OnSyncError:(id)error ErrNo:(int)no;
-(void)OnError:(id)error ErrNo:(int)no;
-(void)OnTalkBrokenError:(id)error ErrNo:(int)no;
-(void)OnNetWorkError:(id)error ErrNo:(int)no;
-(void)OnAutoHangUp:(id)up;
-(void)OnCallInterrupt:(id)interrupt;
-(void)OnInterrupt:(id)interrupt;
-(void)OnBeHanguped:(id)hanguped;
-(void)changeToAudioViewAnimation:(BOOL)audioViewAnimation;
-(void)changeToVoiceView;
-(void)onClickVideoToVoiceButton;
-(void)onHangup;
-(void)onAnimationDidStop;
-(void)makeFlipCameraAnimation;
-(void)onFlipCamera;
-(void)updateEarModeTalkingGesture;
-(void)OnOneWayLocalEarModeForBadNetwork;
-(void)OnOneWayRemoteEarModeForBadNetwork;
-(void)OnOneWayRemoteVideoMode;
-(void)OnOneWayLocalVideoMode;
-(void)OnOneWayRemoteEarModeFor2G;
-(void)OnOneWayRemoteEarMode;
-(void)OnOneWayLocalEarModeFor2G;
-(void)OnOneWayLocalEarMode;
-(void)OnRemoteVideoMode;
-(void)OnRemoteEarMode;
-(void)OnLocalVideoMode;
-(void)OnLocalEarMode;
-(void)OnBothVideoMode;
-(void)OnRemoteEarModeFor2G;
-(void)OnLocalEarModeFor2G;
-(void)OnFromRemoteVideoToBothVideo;
-(void)OnFromLocalVideoToBothVideo;
-(void)resetButtonsAnimation;
-(void)showOneWayRemoteVideoModeTips;
-(void)showOneWayLocalVideoModeTips;
-(void)showOneWayRemoteEarMode2GTips;
-(void)showOneWayRemoteEarModeTips;
-(void)showOneWayLocalEarMode2GTips;
-(void)showOneWayLocalEarModeTips;
-(void)showRemoteEarModeTipsForBadNetwork;
-(void)showLocalEarModeTipsForBadNetwork;
-(void)showRemoteVideoModeWhenConnectTo5_1OrLower;
-(void)showEarModeTipsWhenConnectTo5_1OrLower;
-(void)showLocalVideoModeTipsWhenConnectTo5_1OrLower;
-(void)showRemote2GLocalDontOpenVideoWhenConnectTo5_1OrLower;
-(void)showBothVideoModeTips;
-(void)onVideoOrientationChangeTo:(int)to;
-(void)OnLightInterrupt:(BOOL)interrupt;
-(void)OnMonitorWithSendRecvInfo:(int)sendRecvInfo andSendFPS:(int)fps andRecvFPS:(int)fps3 andSendKbps:(int)kbps andRecvKbps:(int)kbps5 andP2SInfo:(id)info andSpeed:(int*)speed;
-(void)OnMonitorWithSendFPS:(int)sendFPS andRecvFPS:(int)fps;
-(void)OnMonitorChannelInfo:(unsigned)info andChannelType:(int)type;
-(BOOL)canHideButtons;
-(void)handleSingleTap:(id)tap;
-(void)startAutoHideButtonsTimer;
-(void)cancelAutoHideButtons;
-(void)autoHideButtons;
-(void)clearButtonsAnimation;
-(void)showButtons;
-(void)hideButtons;
-(void)onMoveEnd;
-(void)onSmallCameraViewSingleTap;
-(void)videoDeviceCameraBack:(id)back;
-(void)videoDeviceCameraFront:(id)front;
-(void)updateEarModeStatusView:(int)view;
-(void)setVoiceStatusOn;
-(void)asyncSwitchToVideo;
-(void)asyncSwitchToVoice;
-(void)onConfirmSwitchToVoice;
-(void)layoutFooterView;
-(void)layoutTimerView;
-(void)layoutCarmeraView;
-(void)layoutBigCameraView;
-(void)layoutSmallCameraView;
-(CGSize)viewSize;
-(BOOL)isOrientationPortrait;
-(BOOL)isOrientationLandscape;
-(void)changeToMinimizeView;
-(void)onSmallSwitchButtonClick;
-(void)layoutFlipCameraButton;
-(void)layoutMinimizeButton;
-(void)layoutBackgroundView;
-(void)layoutVideoToVoiceView;
-(void)layoutSubviews;
-(void)initView;
-(void)stopPlaySound;
-(void)playTipsSound:(id)sound ofType:(id)type;
-(void)asyncPlayTipsSound;
-(void)playSound:(id)sound OfType:(id)type;
-(void)updateLocalRender;
-(void)updateInputOutputRender:(BOOL)render;
-(void)checkSmallCameraHide;
-(void)updateTipsView;
-(void)updateTipsStatusLabel;
-(void)dealloc;
-(void)applicationBecomeActive;
-(void)applicationGotoBackground;
-(void)applicationOnHomeGotoBackGround;
-(id)initWithFrame:(CGRect)frame andContact:(id)contact AllowVideo:(BOOL)video AndPreviewLayer:(id)layer AndIsMinimizeMode:(BOOL)mode delegate:(id)delegate;
-(void)startTalkWithAllowVideo:(BOOL)allowVideo;
-(void)clearRenderView;
@end

