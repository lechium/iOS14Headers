/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTVisualStyleSetProviding.h>

@class NSMutableDictionary, NSString;

@interface MTVisualStyleSet : NSObject <MTVisualStyleSetProviding> {

	NSMutableDictionary* _visualStylesToStyleNames;
	NSMutableDictionary* _styleNamesToVisualStylings;
	long long _visualStyleSetVersion;
	NSString* _visualStyleSetName;

}

@property (nonatomic,readonly) long long visualStyleSetVersion;                 //@synthesize visualStyleSetVersion=_visualStyleSetVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * visualStyleSetName;              //@synthesize visualStyleSetName=_visualStyleSetName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)visualStylingForStyle:(id)arg1 ;
-(id)initWithName:(id)arg1 visualStyleSetDescription:(id)arg2 andDescendantDescriptions:(id)arg3 ;
-(long long)visualStyleSetVersion;
-(NSString *)visualStyleSetName;
-(NSString *)description;
@end

