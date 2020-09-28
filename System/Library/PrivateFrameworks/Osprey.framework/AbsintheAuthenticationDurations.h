/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableString, NSNumber;

@interface AbsintheAuthenticationDurations : NSObject {

	NSMutableDictionary* _absintheTimestamps;
	NSMutableString* _connectionMethod;
	NSNumber* _getCertificateElapsed;
	NSNumber* _createSessionElapsed;
	NSNumber* _sessionEstablishedElapsed;
	NSNumber* _absintheElapsed;

}

@property (nonatomic,retain) NSMutableDictionary * absintheTimestamps;              //@synthesize absintheTimestamps=_absintheTimestamps - In the implementation block
@property (nonatomic,retain) NSMutableString * connectionMethod;                    //@synthesize connectionMethod=_connectionMethod - In the implementation block
@property (nonatomic,retain) NSNumber * getCertificateElapsed;                      //@synthesize getCertificateElapsed=_getCertificateElapsed - In the implementation block
@property (nonatomic,retain) NSNumber * createSessionElapsed;                       //@synthesize createSessionElapsed=_createSessionElapsed - In the implementation block
@property (nonatomic,retain) NSNumber * sessionEstablishedElapsed;                  //@synthesize sessionEstablishedElapsed=_sessionEstablishedElapsed - In the implementation block
@property (nonatomic,retain) NSNumber * absintheElapsed;                            //@synthesize absintheElapsed=_absintheElapsed - In the implementation block
-(id)init;
-(NSMutableDictionary *)absintheTimestamps;
-(id)calculateDuration:(id)arg1 and:(id)arg2 ;
-(void)setGetCertificateElapsed:(NSNumber *)arg1 ;
-(void)setCreateSessionElapsed:(NSNumber *)arg1 ;
-(void)setSessionEstablishedElapsed:(NSNumber *)arg1 ;
-(void)setAbsintheElapsed:(NSNumber *)arg1 ;
-(NSMutableString *)connectionMethod;
-(void)reportAbsintheAuthenticationDurations;
-(void)setConnectionMethod:(NSMutableString *)arg1 ;
-(void)setAbsintheAuthenticationTimestampForKey:(id)arg1 ;
-(void)setAbsintheConnectionMethodWith:(id)arg1 ;
-(void)setAbsintheTimestamps:(NSMutableDictionary *)arg1 ;
-(NSNumber *)getCertificateElapsed;
-(NSNumber *)createSessionElapsed;
-(NSNumber *)sessionEstablishedElapsed;
-(NSNumber *)absintheElapsed;
@end
