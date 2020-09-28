/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRKClassKitIconID : NSObject {

	NSString* _mascotIdentifier;
	NSString* _colorIdentifier;

}

@property (nonatomic,copy) NSString * mascotIdentifier;                  //@synthesize mascotIdentifier=_mascotIdentifier - In the implementation block
@property (nonatomic,copy) NSString * colorIdentifier;                   //@synthesize colorIdentifier=_colorIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)stringBySanitizingString:(id)arg1 ;
-(id)initWithClass:(id)arg1 ;
-(NSString *)stringValue;
-(id)init;
-(id)initWithIconID:(id)arg1 ;
-(id)initWithMascotIdentifier:(id)arg1 colorIdentifier:(id)arg2 ;
-(NSString *)mascotIdentifier;
-(NSString *)colorIdentifier;
-(void)setMascotIdentifier:(NSString *)arg1 ;
-(void)setColorIdentifier:(NSString *)arg1 ;
@end
