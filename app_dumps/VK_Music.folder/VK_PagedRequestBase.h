/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_AuthorizedApiRequest.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VK_PagedRequestBase : VK_AuthorizedApiRequest {
	unsigned _count;
	unsigned _offset;
	NSString* _ref;
}
@property(retain, nonatomic) NSString* ref;
@property(assign, nonatomic) unsigned offset;
@property(assign, nonatomic) unsigned count;
-(void).cxx_destruct;
-(void)internalInitRequestParams:(id)params;
-(void)internalSetup;
@end
