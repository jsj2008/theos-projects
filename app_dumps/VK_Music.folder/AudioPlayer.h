/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PlayerDelegate.h"
#import "VK_DataProviderDelegate.h"
#import "VK_NetworkReachabilitySubscriber.h"

@class StreamingKitAdapter, NSMutableSet, NSTimer, VK_TrackModel, NSOperationQueue, CachedHTTPDataSourceSandboxOperation, VK_Observable, NSArray, NSString;
@protocol VK_TrackListProvider, VK_Disposable;

__attribute__((visibility("hidden")))
@interface AudioPlayer : XXUnknownSuperclass <PlayerDelegate, VK_NetworkReachabilitySubscriber, VK_DataProviderDelegate> {
	NSMutableSet* _playerListeners;
	StreamingKitAdapter* _currentPlayer;
	NSTimer* _timer;
	int _lastProgress;
	BOOL _wasStatusSetted;
	unsigned _state;
	VK_TrackModel* _currentTrack;
	id<VK_TrackListProvider> _trackListProvider;
	id<VK_Disposable> _playingTrackInfoDisposable;
	id<VK_Disposable> _cachingTrackInfoDisposable;
	NSOperationQueue* _prefetchOperationQueue;
	NSOperationQueue* _loadingOperationQueue;
	CachedHTTPDataSourceSandboxOperation* _prefetchOperation;
	VK_Observable* _tracksInfoUpdatingObservable;
	id<VK_Disposable> _startPlayingDisposable;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<VK_TrackListProvider> trackListProvider;
@property(readonly, assign, nonatomic) VK_TrackModel* currentTrack;
@property(readonly, assign, nonatomic) BOOL isNextTrackAvailable;
@property(readonly, assign, nonatomic) BOOL isPreviousTrackAvailable;
@property(readonly, assign, nonatomic) double progress;
@property(readonly, assign, nonatomic) double duration;
@property(readonly, assign, nonatomic) BOOL isPlaying;
@property(readonly, assign, nonatomic) BOOL isRealyPlaying;
@property(readonly, assign, nonatomic) unsigned state;
@property(retain, nonatomic) id<VK_Disposable> startPlayingDisposable;
@property(retain, nonatomic) VK_Observable* tracksInfoUpdatingObservable;
@property(assign, nonatomic) __weak CachedHTTPDataSourceSandboxOperation* prefetchOperation;
@property(retain, nonatomic) NSOperationQueue* loadingOperationQueue;
@property(retain, nonatomic) NSOperationQueue* prefetchOperationQueue;
@property(retain, nonatomic) id<VK_Disposable> cachingTrackInfoDisposable;
@property(retain, nonatomic) id<VK_Disposable> playingTrackInfoDisposable;
@property(readonly, assign) NSArray* tracks;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)commandCenterHandler;
-(void)commandCenterUpdate;
-(void)commandCenterRemoveHandlers;
-(void)commandCenterAddHandlers;
-(void)trackListDidChanged;
-(void)progressChanged:(double)changed forPlayingTrack:(id)playingTrack;
-(void)setState:(unsigned)state;
-(void)setCurrentTrack:(id)track;
-(void)player:(id)player didFinishPlaying:(id)playing successfully:(BOOL)successfully;
-(void)player:(id)player error:(id)error;
-(void)player:(id)player track:(id)track playingChanged:(BOOL)changed;
-(void)player:(id)player didStartPlaying:(id)playing;
-(void)setEqualizerFrequencies:(id)frequencies;
-(void)networkReachability:(id)reachability networkStatusChanged:(int)changed;
-(void)stopPlayingCurrentTrack;
-(void)stopPlaying;
-(void)stop;
-(void)reset;
-(id)moveToOtherTrackWithMovingBlock:(id)movingBlock;
-(BOOL)loopTracklist;
-(void)movePlayingTrackWithDirection:(unsigned)direction andForcedAction:(BOOL)action;
-(void)movePlayingTrackWithDirection:(unsigned)direction;
-(void)goForward;
-(void)goForwardWithForcedAction:(BOOL)forcedAction;
-(void)goBackward;
-(void)goBackwardWithForcedAction:(BOOL)forcedAction;
-(void)updateBroadcastState;
-(BOOL)broadcastEnabled;
-(void)updateShuffleState;
-(id)shuffleableTrackListProvider;
-(BOOL)shuffleEnabled;
-(void)updateLoopMode;
-(unsigned)loopMode;
-(void)seekToTime:(double)time;
-(void)dataProviderDidDataChanged:(id)dataProvider;
-(void)resetPrefetchOperation;
-(void)resetPreparingToPlaying;
-(void)unsafePlayTrackWithBlock:(id)block;
-(void)cacheNextTrack;
-(id)finishPrefetchOperationIfNeeded;
-(id)updateTrackInfoForTracks:(id)tracks;
-(void)prepareTrackInfoBeforePlaying:(id)playing withMovingDirection:(unsigned)movingDirection;
-(void)internalPlayTrack:(id)track withMovingDirection:(unsigned)movingDirection;
-(void)internalPlayTrackFromIndex:(unsigned)index withMovingDirection:(unsigned)movingDirection;
-(void)playTrackFromIndex:(unsigned)index;
-(void)setPlayingTrackStatusIfNeeded:(id)needed;
-(void)shuffleAndPlayWithTracklistProvider:(id)tracklistProvider;
-(void)playTracksFromIndex:(unsigned)index;
-(void)playTracksFromStart;
-(void)tick;
-(void)setupInitialEqualizer;
-(void)setupTimer;
-(void)unsubscribe:(id)unsubscribe;
-(void)subscribe:(id)subscribe;
-(BOOL)isTrackInPlayList:(id)playList;
-(void)setPaused:(BOOL)paused;
-(id)indexForTrack:(id)track;
-(void)playTrack:(id)track withMovingDirection:(unsigned)movingDirection;
-(void)playTrack:(id)track;
-(void)dealloc;
-(id)init;
-(void)openAndPlayWithShuffledTracklistProvider:(id)shuffledTracklistProvider;
@end

