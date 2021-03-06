/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IGLResource.h"
#import "NSObject.h"

@class NSString;

@protocol IGLResource <NSObject>
-(void)unload;
@end

@interface IGLResource : XXUnknownSuperclass <IGLResource> {
	BOOL _loaded;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) BOOL loaded;
-(void)unload;
-(void)resourceUnloaded;
-(void)resourceLoaded;
-(void)dealloc;
@end

