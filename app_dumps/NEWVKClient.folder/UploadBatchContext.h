/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UploadBatchContext : XXUnknownSuperclass {
	id _serverData;
	double _timestamp;
	double _timeout;
}
@property(retain) id serverData;
@property(assign) double timeout;
@property(assign) double timestamp;
-(void).cxx_destruct;
-(id)freshServerData;
-(void)invalidate:(id)invalidate;
-(void)useServerData:(id)data timeout:(double)timeout;
-(void)useServerData:(id)data;
@end

