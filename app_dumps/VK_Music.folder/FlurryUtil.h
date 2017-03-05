/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_Music-Structs.h"


@interface FlurryUtil : XXUnknownSuperclass {
}
+(BOOL)assertNotNil:(id)aNil;
+(id)getIdentifierForVendor;
+(int)getSystemVersionAsAnInteger;
+(BOOL)isRetina;
+(BOOL)isIPad;
+(id)getCanvasOrientation;
+(BOOL)deviceInLandscape;
+(BOOL)canvasInPortraitUpsideDown;
+(BOOL)canvasInLandscapeLeft;
+(BOOL)canvasInLandscapeRight;
+(BOOL)canvasInLandscape;
+(BOOL)canvasInLandscapeLeft:(id)landscapeLeft;
+(BOOL)canvasInLandscapeRight:(id)landscapeRight;
+(BOOL)canvasInLandscape:(id)landscape;
+(BOOL)isInBackground;
+(void)substituteParamsInString:(id)string withValuesDictionary:(id)valuesDictionary forPattern:(id)pattern;
+(double)reduceLocationPrecision:(double)precision withDecimalPlaces:(int)decimalPlaces;
+(id)getFixedSalt;
+(BOOL)updateIfChangedCookieValue:(id)value forCookieKey:(id)cookieKey;
+(id)md5String:(id)string;
+(BOOL)hasUserOptedOut;
+(void)setFlurryOptOut:(BOOL)anOut;
+(long)lastBootTime;
+(unsigned long long)getDiskSize;
+(BOOL)isInWatchExtension;
+(unsigned long long)getFreeDiskspace;
+(int)int32FromNSInteger:(int)nsinteger;
+(unsigned)uint32FromNSUInteger:(unsigned)nsuinteger;
+(id)allCounters;
+(void)printCounters;
+(void)decrementCounter:(id)counter;
+(void)decrementCounter:(id)counter locationName:(char*)name;
+(void)incrementCounter:(id)counter;
+(void)incrementCounter:(id)counter locationName:(char*)name;
+(id)preferredLanguage;
+(BOOL)isAdTrackingEnabled;
+(id)getFlurryId;
+(char*)getLimit;
+(char*)getUser;
+(char*)getModule;
+(char*)getMgr;
+(char*)getId;
+(id)generateCFUUIDBasedUID;
+(id)generateCFUUID;
+(void)cleanupStoredIdentifierForVendor;
+(id)dataFromHexString:(id)hexString;
+(id)hashDataToHexString:(char*)hexString length:(unsigned)length;
+(id)hashData:(id)data;
+(BOOL)appIsCracked;
+(BOOL)deviceIsJailbroken;
+(id)devicePlatform;
+(id)filePathDirectory;
+(id)oldFilePathDirectoryUptilAgentVersion109;
+(NSRange)flurryRangeOfData:(id)data inData:(id)data2;
+(id)createParamKeysDictFromUrlParams:(id)urlParams paramsHeader:(id*)header paramsKVString:(id*)string;
+(int)dataChecksum:(id)checksum;
+(void)generateChecksumTable;
+(id)encodeIllegalCharsToPercentEscapeString:(id)percentEscapeString;
+(id)encodeToPercentEscapeString:(id)percentEscapeString;
+(id)decodeFromPercentEscapeString:(id)percentEscapeString;
+(BOOL)addSkipBackupAttributeToItemAtURL:(id)url;
+(CGRect)deviceScreenBounds;
+(id)firstElementFromArray:(id)array;
+(void)archiveDictionary:(id)dictionary toFile:(id)file;
+(void)archiveObject:(id)object toFile:(id)file;
+(void)_archiveObject:(id)object toPath:(id)path;
+(void)_TVOS_archiveObject:(id)object toPath:(id)path;
+(id)safeUnarchiveObjectFromFSWithFile:(id)file;
+(id)safeUnarchiveObjectWithFile:(id)file;
+(id)_unarchiveFromNSUserDefaultsWithPath:(id)path;
+(id)_safeUnarchiveObjectWithFile:(id)file;
+(BOOL)dataExistsAtPath:(id)path;
+(void)handleException:(id)exception;
+(void)setShowErrorInLogEnabled:(BOOL)logEnabled;
+(int)logLevel;
+(void)setLogLevel:(int)level;
+(void)assertNotRunningOnQueue:(id)queue;
+(void)assertRunningOnQueue:(id)queue;
+(void)assertThreadIsNotMain;
@end
