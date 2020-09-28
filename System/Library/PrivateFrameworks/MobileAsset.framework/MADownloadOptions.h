/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface MADownloadOptions : NSObject <NSSecureCoding> {

	BOOL _allowsCellularAccess;
	BOOL _canUseLocalCacheServer;
	BOOL _discretionary;
	BOOL _allowsExpensiveAccess;
	BOOL _requiresPowerPluggedIn;
	BOOL _prefersInfraWiFi;
	BOOL _liveServerCatalogOnly;
	BOOL _liveServerCatalogOnlyIsOverridden;
	long long _timeoutIntervalForResource;
	NSMutableDictionary* _additionalServerParams;
	NSString* _sessionId;

}

@property (assign,nonatomic) BOOL allowsCellularAccess;                                 //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) long long timeoutIntervalForResource;                      //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL discretionary;                                        //@synthesize discretionary=_discretionary - In the implementation block
@property (assign,nonatomic) BOOL allowsExpensiveAccess;                                //@synthesize allowsExpensiveAccess=_allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) BOOL requiresPowerPluggedIn;                               //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) BOOL canUseLocalCacheServer;                               //@synthesize canUseLocalCacheServer=_canUseLocalCacheServer - In the implementation block
@property (assign,nonatomic) BOOL prefersInfraWiFi;                                     //@synthesize prefersInfraWiFi=_prefersInfraWiFi - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                      //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalServerParams;              //@synthesize additionalServerParams=_additionalServerParams - In the implementation block
@property (assign,nonatomic) BOOL liveServerCatalogOnly;                                //@synthesize liveServerCatalogOnly=_liveServerCatalogOnly - In the implementation block
@property (assign,nonatomic) BOOL liveServerCatalogOnlyIsOverridden;                    //@synthesize liveServerCatalogOnlyIsOverridden=_liveServerCatalogOnlyIsOverridden - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDiscretionary:(BOOL)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(NSMutableDictionary *)additionalServerParams;
-(BOOL)liveServerCatalogOnlyIsOverridden;
-(void)setAdditionalServerParams:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(BOOL)requiresPowerPluggedIn;
-(void)setTimeoutIntervalForResource:(long long)arg1 ;
-(void)setCanUseLocalCacheServer:(BOOL)arg1 ;
-(void)setLiveServerCatalogOnly:(BOOL)arg1 ;
-(void)logOptions;
-(BOOL)liveServerCatalogOnly;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(id)init;
-(void)setAllowsExpensiveAccess:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)discretionary;
-(void)setPrefersInfraWiFi:(BOOL)arg1 ;
-(BOOL)allowsExpensiveAccess;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)setLiveServerCatalogOnlyIsOverridden:(BOOL)arg1 ;
-(BOOL)prefersInfraWiFi;
-(long long)timeoutIntervalForResource;
-(BOOL)canUseLocalCacheServer;
-(void)setRequiresPowerPluggedIn:(BOOL)arg1 ;
-(id)description;
@end
