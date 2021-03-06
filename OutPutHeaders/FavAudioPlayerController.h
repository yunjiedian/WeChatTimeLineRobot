/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IFavAudioPlayerExt.h"
#import "MMUIView.h"

@class UIImage, MMUIImageView, UIButton, NSString, UILabel, FavAudioInfo;

@interface FavAudioPlayerController : MMUIView <IFavAudioPlayerExt> {
	FavAudioInfo* m_audioInfo;
	UIButton* m_playBtn;
	UIImage* m_imgForPause;
	UIImage* m_imgForPauseHL;
	UIImage* m_imgForPlay;
	UIImage* m_imgForPlayHL;
	BOOL m_bBtnForPlay;
	UILabel* m_durationLabel;
	MMUIImageView* m_imgvBack;
	MMUIImageView* m_imgvFront;
	unsigned long m_progressLength;
	unsigned long m_uiVoiceTime;
	BOOL _isWeNoteStyle;
	UIButton* _stopBtn;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) FavAudioInfo* m_audioInfo;
-(void).cxx_destruct;
-(void)OnAudioPlaying:(id)playing Offset:(unsigned long)offset;
-(void)OnPlayError:(id)error;
-(void)OnEndPlay:(id)play isForceStop:(BOOL)stop;
-(void)OnBeginPlay:(id)play;
-(void)stop;
-(void)play;
-(void)onPlayBtnClick;
-(BOOL)isCurrentControllForPlayer;
-(void)updateProgress:(unsigned long)progress Animated:(BOOL)animated;
-(void)updateBtnImage;
-(void)initProgressView;
-(void)initDurationLabel;
-(void)initBtn;
-(void)layoutSubviews;
-(void)layoutSubviewsWithDefault;
-(void)layoutSubviewsWithWeNoteStyle;
-(void)initWeNoteStyleView;
-(void)initView;
-(id)initWithFavAudioInfo:(id)favAudioInfo;
-(id)initWeNotePlayViewWithFavAudioInfo:(id)favAudioInfo;
-(void)dealloc;
@end

