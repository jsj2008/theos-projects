/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL;

__attribute__((visibility("hidden")))
@interface CachedHTTPDataSourceStorage : XXUnknownSuperclass {
	NSURL* _directoryUrl;
}
@property(retain, nonatomic) NSURL* directoryUrl;
+(id)shared;
-(void).cxx_destruct;
-(void)configure;
-(id)createFileWithSize:(long long)size;
-(id)init;
@end

