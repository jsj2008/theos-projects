/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObjectID, NSString;

__attribute__((visibility("hidden")))
@interface VK_FavoriteTrackInfo : XXUnknownSuperclass {
	NSManagedObjectID* _dataTrackId;
	unsigned _downloadPercentage;
	unsigned _downloadingStatus;
	unsigned _state;
	unsigned _downloadingErrorReason;
	NSString* _trackFilePath;
}
@property(retain, nonatomic) NSString* trackFilePath;
@property(assign, nonatomic) unsigned downloadingErrorReason;
@property(assign, nonatomic) unsigned state;
@property(assign, nonatomic) unsigned downloadingStatus;
@property(assign, nonatomic) unsigned downloadPercentage;
@property(retain, nonatomic) NSManagedObjectID* dataTrackId;
@property(readonly, assign) BOOL isPreparedForDownloading;
@property(readonly, assign) BOOL isDownloaded;
@property(readonly, assign) BOOL isDownloadingFailed;
@property(readonly, assign) BOOL isDownloading;
-(void).cxx_destruct;
-(id)init;
@end

