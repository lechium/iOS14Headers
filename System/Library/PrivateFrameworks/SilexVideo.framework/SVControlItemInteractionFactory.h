/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVControlItemInteractionFactory.h>

@protocol SVControlItemInteractionFactory <NSObject>
@required
-(id)createInteractionWithControlItem:(id)arg1;

@end


@protocol SVInteractionContextFactory;
@class NSString;

@interface SVControlItemInteractionFactory : NSObject <SVControlItemInteractionFactory> {

	id<SVInteractionContextFactory> _interactionContextFactory;

}

@property (nonatomic,readonly) id<SVInteractionContextFactory> interactionContextFactory;              //@synthesize interactionContextFactory=_interactionContextFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVInteractionContextFactory>)interactionContextFactory;
-(id)initWithInteractionContextFactory:(id)arg1 ;
-(id)createInteractionWithControlItem:(id)arg1 ;
@end

