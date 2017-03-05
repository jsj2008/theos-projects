/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "STKCoreFoundationDataSource.h"

@class NSString;

@interface STKLocalFileDataSource : STKCoreFoundationDataSource {
	long long position;
	long long length;
	unsigned long audioFileTypeHint;
	NSString* filePath;
}
@property(copy) NSString* filePath;
+(unsigned long)audioFileTypeHintFromFileExtension:(id)fileExtension;
-(void).cxx_destruct;
-(id)description;
-(void)seekToOffset:(long long)offset;
-(int)readIntoBuffer:(char*)buffer withSize:(int)size;
-(long long)length;
-(long long)position;
-(void)open;
-(void)close;
-(void)dealloc;
-(unsigned long)audioFileTypeHint;
-(id)initWithFilePath:(id)filePath;
@end

