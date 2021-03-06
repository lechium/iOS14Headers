/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class MPMediaItem, OKProducerPreset, NSURL, NSString;

@interface PUSlideshowMediaItem : NSObject {

	MPMediaItem* _mediaItem;
	OKProducerPreset* _preset;
	long long _type;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * audioURL; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * localizedName; 
+(id)mediaItemsForOKThemes;
+(id)mediaItemForType:(long long)arg1 uniqueIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedName;
-(id)init;
-(NSString *)uniqueIdentifier;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)audioURL;
-(id)_initWithType:(long long)arg1 ;
-(id)initWitPreset:(id)arg1 ;
-(id)initWitMediaItem:(id)arg1 ;
-(unsigned long long)hash;
@end

