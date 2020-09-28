/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>

@class NSArray, NSUUID, NSString;

@interface MSPContainerArrayStateSnapshot : NSObject <MSPContainerStateSnapshot> {

	NSArray* _contents;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,retain) NSUUID * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contents;              //@synthesize contents=_contents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(NSArray *)contents;
-(NSUUID *)clientIdentifier;
-(id)init;
-(id)initWithContents:(id)arg1 ;
-(NSString *)description;
-(id)initWithContents:(id)arg1 clientIdentifier:(id)arg2 ;
@end
