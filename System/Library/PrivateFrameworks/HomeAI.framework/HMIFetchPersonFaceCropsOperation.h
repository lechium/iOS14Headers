/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIPersonManagerDataSource;
@class HMIPerson, NSSet, NSString, NSArray;

@interface HMIFetchPersonFaceCropsOperation : HMFOperation <HMFObject, HMFLogging> {

	id<HMIPersonManagerDataSource> _dataSource;
	HMIPerson* _person;
	NSSet* _personFaceCrops;

}

@property (readonly) id<HMIPersonManagerDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMIPerson * person;                                          //@synthesize person=_person - In the implementation block
@property (readonly) NSSet * personFaceCrops;                                     //@synthesize personFaceCrops=_personFaceCrops - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)shortDescription;
-(HMIPerson *)person;
-(NSString *)privateDescription;
-(NSString *)shortDescription;
-(id<HMIPersonManagerDataSource>)dataSource;
-(void)main;
-(id)initWithDataSource:(id)arg1 person:(id)arg2 ;
-(NSSet *)personFaceCrops;
@end

