/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSString;

@interface PUTileIdentifier : NSObject <NSCopying> {

	unsigned long long _hash;
	NSIndexPath* _indexPath;
	NSString* _tileKind;
	NSString* _dataSourceIdentifier;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;                      //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * tileKind;                          //@synthesize tileKind=_tileKind - In the implementation block
@property (nonatomic,readonly) NSString * dataSourceIdentifier;              //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
-(NSString *)dataSourceIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tileKind;
-(NSIndexPath *)indexPath;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(unsigned long long)hash;
-(id)description;
@end

