/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_ApiResponse.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface VK_UserAudioSearchResponse : VK_ApiResponse {
	NSArray* _tracks;
}
@property(retain, nonatomic) NSArray* tracks;
+(void)internalInitMapping:(id)mapping;
-(void).cxx_destruct;
@end

