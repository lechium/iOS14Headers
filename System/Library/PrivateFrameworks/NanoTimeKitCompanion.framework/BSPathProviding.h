/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL;


@protocol BSPathProviding <NSObject>
@property (nonatomic,readonly) NSURL * defaultPath; 
@property (nonatomic,readonly) NSURL * libraryPath; 
@property (nonatomic,readonly) NSURL * cachesPath; 
@required
-(NSURL *)defaultPath;
-(NSURL *)libraryPath;
-(NSURL *)cachesPath;

@end
