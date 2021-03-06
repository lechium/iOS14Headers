/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface KNSoundtrack : TSPObject <NSCopying> {

	float _volume;
	long long _mode;
	NSArray* _media;

}

@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) long long mode; 
@property (nonatomic,copy) NSArray * media; 
+(BOOL)needsObjectUUID;
-(void)setVolume:(float)arg1 ;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)media;
-(float)volume;
-(void)setMedia:(NSArray *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithSoundtrackMedia:(id)arg1 context:(id)arg2 ;
@end

