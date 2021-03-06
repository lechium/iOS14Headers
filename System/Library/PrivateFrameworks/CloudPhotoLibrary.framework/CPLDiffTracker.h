/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface CPLDiffTracker : NSObject {

	NSMutableSet* _differingProperties;
	BOOL _shouldCompareAllProperties;
	BOOL _objectsAreTotallyDifferent;

}

@property (assign,nonatomic) BOOL shouldCompareAllProperties;                //@synthesize shouldCompareAllProperties=_shouldCompareAllProperties - In the implementation block
@property (nonatomic,readonly) BOOL objectsAreTotallyDifferent;              //@synthesize objectsAreTotallyDifferent=_objectsAreTotallyDifferent - In the implementation block
@property (nonatomic,readonly) NSSet * differingProperties;                  //@synthesize differingProperties=_differingProperties - In the implementation block
-(id)redactedDescription;
-(id)description;
-(void)noteObjectAreTotallyDifferent;
-(void)noteObjectsDifferOnProperty:(id)arg1 ;
-(BOOL)areObjectsDifferentOnProperty:(id)arg1 ;
-(BOOL)shouldCompareAllProperties;
-(void)setShouldCompareAllProperties:(BOOL)arg1 ;
-(BOOL)objectsAreTotallyDifferent;
-(NSSet *)differingProperties;
@end

