/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ECAuthenticatableAccount <NSObject>
@property (readonly) NSString * username; 
@property (copy,readonly) NSString * password; 
@property (nonatomic,copy,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * oauth2Token; 
@required
-(NSString *)username;
-(NSString *)hostname;
-(NSString *)domain;
-(NSString *)oauth2Token;
-(void)setMissingPasswordError;
-(NSString *)password;

@end

