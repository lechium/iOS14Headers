/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLWebClient.h>

@class NSString, NSArray;

@interface SLGoogleWebClient : NSObject <SLWebClient>

@property (nonatomic,readonly) NSString * clientID; 
@property (nonatomic,readonly) NSString * clientRedirect; 
@property (nonatomic,readonly) NSString * tokenURL; 
@property (nonatomic,readonly) NSString * authRequestURL; 
@property (nonatomic,readonly) NSString * userInfoURL; 
@property (nonatomic,readonly) NSString * fallbackUserInfoURL; 
@property (nonatomic,readonly) Class webAuthRequestClass; 
@property (nonatomic,readonly) Class tokenRequestClass; 
@property (nonatomic,readonly) Class tokenResponseClass; 
@property (nonatomic,readonly) Class webUserInfoResponseClass; 
@property (nonatomic,readonly) Class fallbackWebUserInfoResponseClass; 
@property (nonatomic,readonly) NSString * clientSecret; 
@property (nonatomic,readonly) NSString * clientRedirectForAppOpenURL; 
@property (nonatomic,readonly) NSString * source; 
@property (nonatomic,readonly) NSArray * defaultScope; 
@property (nonatomic,readonly) NSArray * youTubeScope; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)clientID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)source;
-(NSArray *)defaultScope;
-(NSString *)tokenURL;
-(Class)tokenRequestClass;
-(NSString *)clientSecret;
-(NSString *)clientRedirect;
-(Class)tokenResponseClass;
-(NSString *)userInfoURL;
-(Class)webUserInfoResponseClass;
-(NSString *)fallbackUserInfoURL;
-(Class)fallbackWebUserInfoResponseClass;
-(NSString *)authRequestURL;
-(Class)webAuthRequestClass;
-(NSString *)clientRedirectForAppOpenURL;
-(NSArray *)youTubeScope;
@end
