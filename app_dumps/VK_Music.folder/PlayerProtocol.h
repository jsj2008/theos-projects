/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@protocol PlayerDelegate;

@protocol PlayerProtocol <NSObject>
@property(readonly, assign, nonatomic) double currentTime;
@property(readonly, assign, nonatomic) double duration;
@property(readonly, assign, nonatomic) id currentItem;
@property(assign, nonatomic) __weak id<PlayerDelegate> delegate;
-(void)seekToTime:(double)time;
-(void)reset;
-(void)stop;
-(void)resume;
-(BOOL)getPaused;
-(void)pause;
-(void)play;
@end

