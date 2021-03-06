/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>
#import <libobjc.A.dylib/MPUserIdentityConsuming.h>

@class NSMutableDictionary, ICUserIdentity, MPSectionedCollection, NSDictionary, NSString;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest <MPUserIdentityConsuming> {

	NSMutableDictionary* _itemIndexPathToOverridePropertySet;
	ICUserIdentity* _userIdentity;
	MPSectionedCollection* _unpersonalizedContentDescriptors;
	MPSectionedCollection* _representedObjects;

}

@property (nonatomic,copy,readonly) NSDictionary * itemIndexPathToOverridePropertySet; 
@property (nonatomic,readonly) MPSectionedCollection * unpersonalizedContentDescriptors;              //@synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * representedObjects;                              //@synthesize representedObjects=_representedObjects - In the implementation block
@property (nonatomic,copy) ICUserIdentity * userIdentity;                                             //@synthesize userIdentity=_userIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(BOOL)requiresNetwork;
+(id)libraryViewWithUserIdentity:(id)arg1 ;
+(id)preferredQueue;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(ICUserIdentity *)userIdentity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(void)setRepresentedObjects:(MPSectionedCollection *)arg1 ;
-(void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithUnpersonalizedContentDescriptors:(id)arg1 ;
-(NSDictionary *)itemIndexPathToOverridePropertySet;
-(id)propertiesForItemAtIndexPath:(id)arg1 ;
-(id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2 ;
-(MPSectionedCollection *)representedObjects;
@end

