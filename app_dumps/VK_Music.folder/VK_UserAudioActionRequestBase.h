/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_AuthorizedApiRequest.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface VK_UserAudioActionRequestBase : VK_AuthorizedApiRequest {
	NSArray* _tracksIds;
}
@property(retain, nonatomic) NSArray* tracksIds;
-(void).cxx_destruct;
-(void)internalInitRequestParams:(id)params;
-(void)internalValidateParams;
-(BOOL)internalCachingSupported;
@end

