/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateForVerticalScroll;
	BOOL _sectioningIsPreserved;
	BOOL _samplingIsPreserved;
	BOOL _invalidationHasBeenRedispatched;

}

@property (assign,nonatomic) BOOL invalidateForVerticalScroll;                  //@synthesize invalidateForVerticalScroll=_invalidateForVerticalScroll - In the implementation block
@property (assign,nonatomic) BOOL sectioningIsPreserved;                        //@synthesize sectioningIsPreserved=_sectioningIsPreserved - In the implementation block
@property (assign,nonatomic) BOOL samplingIsPreserved;                          //@synthesize samplingIsPreserved=_samplingIsPreserved - In the implementation block
@property (assign,nonatomic) BOOL invalidationHasBeenRedispatched;              //@synthesize invalidationHasBeenRedispatched=_invalidationHasBeenRedispatched - In the implementation block
-(BOOL)invalidateForVerticalScroll;
-(void)setSamplingIsPreserved:(BOOL)arg1 ;
-(BOOL)sectioningIsPreserved;
-(void)setSectioningIsPreserved:(BOOL)arg1 ;
-(void)setInvalidateForVerticalScroll:(BOOL)arg1 ;
-(void)setInvalidationHasBeenRedispatched:(BOOL)arg1 ;
-(BOOL)invalidationHasBeenRedispatched;
-(BOOL)samplingIsPreserved;
-(id)description;
@end

