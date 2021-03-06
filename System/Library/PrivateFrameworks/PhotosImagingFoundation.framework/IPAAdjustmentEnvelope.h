/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IPAAdjustmentStack, NSString;

@interface IPAAdjustmentEnvelope : NSObject <NSCopying> {

	IPAAdjustmentStack* _adjustmentStack;
	NSString* _originator;
	NSString* _format;
	NSString* _formatVersion;

}

@property (nonatomic,retain) IPAAdjustmentStack * adjustmentStack;              //@synthesize adjustmentStack=_adjustmentStack - In the implementation block
@property (nonatomic,retain) NSString * originator;                             //@synthesize originator=_originator - In the implementation block
@property (nonatomic,retain) NSString * format;                                 //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * formatVersion;                          //@synthesize formatVersion=_formatVersion - In the implementation block
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)format;
-(void)setFormatVersion:(NSString *)arg1 ;
-(NSString *)formatVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)originator;
-(id)debugDescription;
-(IPAAdjustmentStack *)adjustmentStack;
-(void)setOriginator:(NSString *)arg1 ;
-(id)videoAdjustmentStack;
-(id)photoAdjustmentStack;
-(BOOL)containsPhotoAdjustments;
-(BOOL)containsVideoAdjustments;
-(void)setAdjustmentStack:(IPAAdjustmentStack *)arg1 ;
@end

