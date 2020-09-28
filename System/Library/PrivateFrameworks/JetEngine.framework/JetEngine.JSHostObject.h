/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_.h>

@class NSString;

@interface JetEngine.JSHostObject : NSObject <_TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_>

@property (readonly,nonatomic) NSString * platform; 
@property (readonly,nonatomic) NSString * osBuild; 
@property (readonly,nonatomic) NSString * deviceModel; 
@property (readonly,nonatomic) NSString * deviceLocalizedModel; 
@property (readonly,nonatomic) NSString * clientIdentifier; 
@property (readonly,nonatomic) NSString * clientVersion; 
-(NSString *)osBuild;
-(NSString *)deviceModel;
-(NSString *)clientVersion;
-(NSString *)clientIdentifier;
-(id)init;
-(BOOL)isOSAtLeast:(id)arg1 :(id)arg2 :(id)arg3 ;
-(NSString *)deviceLocalizedModel;
-(NSString *)platform;
@end
