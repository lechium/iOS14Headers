/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileRequesterDelegate, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileRequest, NSObject, NSThread, NSString, GEOResourceManifestManager;

@interface GEOTileRequester : NSObject {

	GEOTileRequest* _tileRequest;
	id<GEOTileRequesterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _context;
	NSThread* _thread;
	NSString* _deviceCountry;
	NSString* _deviceRegion;

}

@property (nonatomic,readonly) GEOResourceManifestManager * resourceManifestManager; 
@property (nonatomic,readonly) GEOTileRequest * tileRequest;                                      //@synthesize tileRequest=_tileRequest - In the implementation block
@property (nonatomic,__weak,readonly) id<GEOTileRequesterDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                        //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id context;                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * deviceCountry;                                            //@synthesize deviceCountry=_deviceCountry - In the implementation block
@property (nonatomic,retain) NSString * deviceRegion;                                             //@synthesize deviceRegion=_deviceRegion - In the implementation block
+(unsigned char)tileProviderIdentifier;
+(unsigned long long)expiringTilesetsCount;
+(id)locationSensitiveTilesets;
+(SCD_Struct_GE55*)newExpiringTilesets;
-(void)tearDown;
-(NSString *)deviceRegion;
-(void)cancel;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)setContext:(id)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(GEOTileRequest *)tileRequest;
-(void)start;
-(id)init;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)context;
-(NSString *)deviceCountry;
-(void)setDeviceCountry:(NSString *)arg1 ;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(GEOResourceManifestManager *)resourceManifestManager;
-(id<GEOTileRequesterDelegate>)delegate;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
@end
