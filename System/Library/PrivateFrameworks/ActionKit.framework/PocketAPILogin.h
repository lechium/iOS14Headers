/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PocketAPIDelegate.h>

@protocol PocketAPIDelegate;
@class PocketAPI, NSString, NSOperationQueue;

@interface PocketAPILogin : NSObject <NSSecureCoding, PocketAPIDelegate> {

	PocketAPI* API;
	NSString* uuid;
	NSString* requestToken;
	NSString* accessToken;
	NSOperationQueue* operationQueue;
	id<PocketAPIDelegate> delegate;
	BOOL didStart;
	BOOL didFinish;
	BOOL reverseAuth;

}

@property (nonatomic,retain,readonly) PocketAPI * API; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * requestToken; 
@property (nonatomic,retain,readonly) NSString * accessToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)requestToken;
-(void)fetchRequestToken;
-(NSString *)accessToken;
-(void)dealloc;
-(id)redirectURL;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(PocketAPI *)API;
-(void)pocketAPI:(id)arg1 receivedRequestToken:(id)arg2 ;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(void)_setRequestToken:(id)arg1 ;
-(void)_setReverseAuth:(BOOL)arg1 ;
-(id)initWithAPI:(id)arg1 delegate:(id)arg2 ;
-(void)convertRequestTokenToAccessToken;
-(void)loginDidStart;
-(void)loginDidFinish:(BOOL)arg1 ;
@end
