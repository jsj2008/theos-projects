/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString;

@interface ANSPackageLogOperation : XXUnknownSuperclass {
	NSURL* _compressedLogURL;
	NSString* _multipartMimeBoundary;
	NSURL* _packagedLogURL;
}
@property(retain, nonatomic) NSString* multipartMimeBoundary;
@property(retain, nonatomic) NSURL* compressedLogURL;
@property(retain, nonatomic) NSURL* packagedLogURL;
-(void).cxx_destruct;
-(id)multipartURLForCompressedURL:(id)compressedURL withBoundary:(id)boundary;
-(void)main;
-(id)initWithCompressedLogURL:(id)compressedLogURL packagedLogURL:(id)url multipartMimeBoundary:(id)boundary;
@end

