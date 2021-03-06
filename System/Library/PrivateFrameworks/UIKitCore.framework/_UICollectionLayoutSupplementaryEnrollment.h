/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface _UICollectionLayoutSupplementaryEnrollment : NSObject {

	NSString* _kind;
	NSUUID* _enrollmentIdentifier;

}

@property (nonatomic,readonly) NSString * kind;                            //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSUUID * enrollmentIdentifier;              //@synthesize enrollmentIdentifier=_enrollmentIdentifier - In the implementation block
-(NSUUID *)enrollmentIdentifier;
-(NSString *)kind;
-(id)initWithKind:(id)arg1 ;
-(id)description;
@end

