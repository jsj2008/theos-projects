/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ANSUploaderDelegate <NSObject>
-(void)uploader:(id)uploader completedRequest:(id)request withResponse:(id)response uniqueName:(id)name error:(id)error completionHandler:(id)handler;
-(void)uploader:(id)uploader didFinishUploadWithUniqueName:(id)uniqueName error:(id)error;
-(id)uploader:(id)uploader filePathForUniqueName:(id)uniqueName;
@optional
-(void)uploader:(id)uploader session:(id)session didReceiveChallenge:(id)challenge completionHandler:(id)handler;
@end

