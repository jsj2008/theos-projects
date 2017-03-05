/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "STKLocalFileDataSource.h"

@class NSString, VK_CryptService;

__attribute__((visibility("hidden")))
@interface CryptoFileDataSource : STKLocalFileDataSource {
	NSString* _key;
	VK_CryptService* _cryptoService;
}
+(unsigned long)audioFileTypeHintFromFileExtension:(id)fileExtension;
-(void).cxx_destruct;
-(int)readIntoBuffer:(char*)buffer withSize:(int)size;
-(id)initWithFilePath:(id)filePath encryptionKey:(id)key;
@end

