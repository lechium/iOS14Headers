/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface HMIExternalPersonManagerSettings : HMFObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _importingFromPhotoLibraryEnabled;
	BOOL _sharingFaceClassificationsEnabled;

}

@property (getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled;                //@synthesize importingFromPhotoLibraryEnabled=_importingFromPhotoLibraryEnabled - In the implementation block
@property (getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled;              //@synthesize sharingFaceClassificationsEnabled=_sharingFaceClassificationsEnabled - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isImportingFromPhotoLibraryEnabled;
-(NSArray *)attributeDescriptions;
-(BOOL)isSharingFaceClassificationsEnabled;
-(void)setImportingFromPhotoLibraryEnabled:(BOOL)arg1 ;
-(void)setSharingFaceClassificationsEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

