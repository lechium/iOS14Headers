/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:24 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRecordingSettings.h>

@class NSDictionary, NSArray;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings {

	NSDictionary* _audioSettings;
	NSArray* _metadata;

}

@property (nonatomic,copy) NSDictionary * audioSettings;              //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,copy) NSArray * metadata;                        //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)audioSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(void)dealloc;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

