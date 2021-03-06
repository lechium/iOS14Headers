/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKMobileGestalt : NSObject

@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) double mainScreenScale; 
@property (nonatomic,readonly) CGSize mainScreenSizeInPixels; 
@property (nonatomic,readonly) unsigned long long availableBytes; 
@property (nonatomic,copy,readonly) NSString * buildVersion; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
+(id)sharedGestalt;
-(NSString *)productVersion;
-(NSString *)serialNumber;
-(double)mainScreenScale;
-(unsigned long long)availableBytes;
-(NSString *)buildVersion;
-(id)answerForQuestion:(CFStringRef)arg1 ofClass:(Class)arg2 ;
-(id)answerForQuestion:(CFStringRef)arg1 ;
-(CGSize)mainScreenSizeInPixels;
@end

