/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WKWallpaper <NSCopying>
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long backingType; 
@required
-(long long)identifier;
-(unsigned long long)type;
-(unsigned long long)backingType;
-(NSString *)name;

@end
