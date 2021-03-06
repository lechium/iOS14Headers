/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * appleConnectSessionExpirationTimestamp; 
@property (nonatomic,copy) NSString * appleConnectSessionToken; 
@property (nonatomic,copy) NSString * dataAnchor; 
@property (nonatomic,copy) NSNumber * requestSync; 
@property (nonatomic,copy) NSArray * syncAnchors; 
@property (nonatomic,copy) NSString * version; 
+(id)assistantLoaded;
+(id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)version;
-(id)groupIdentifier;
-(void)setVersion:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSNumber *)requestSync;
-(NSString *)appleConnectSessionToken;
-(NSString *)dataAnchor;
-(NSNumber *)appleConnectSessionExpirationTimestamp;
-(void)setAppleConnectSessionExpirationTimestamp:(NSNumber *)arg1 ;
-(void)setAppleConnectSessionToken:(NSString *)arg1 ;
-(void)setDataAnchor:(NSString *)arg1 ;
-(void)setRequestSync:(NSNumber *)arg1 ;
-(NSArray *)syncAnchors;
-(void)setSyncAnchors:(NSArray *)arg1 ;
@end

