/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface ShareOpenSDKStateItem : MMObject {
	int m_state;
	float m_progress;
}
@property(assign, nonatomic) float m_progress;
@property(assign, nonatomic) int m_state;
-(id)initWithState:(int)state progress:(float)progress;
-(id)initWithState:(int)state;
@end

