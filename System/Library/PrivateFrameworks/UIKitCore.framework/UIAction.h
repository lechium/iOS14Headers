/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>
#import <UIKitCore/_UIMenuLeaf.h>

@class NSString, UIImage;

@interface UIAction : UIMenuElement <_UIMenuLeaf> {

	BOOL _requiresAuthenticatedInput;
	NSString* _discoverabilityTitle;
	NSString* _identifier;
	unsigned long long _attributes;
	long long _state;
	id _sender;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                       //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;                  //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id sender;                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput;              //@synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)actionWithHandler:(/*^block*/id)arg1 ;
-(NSString *)identifier;
-(id)sender;
-(void)setImage:(UIImage *)arg1 ;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_immutableCopy;
-(void)_performWithTarget:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(long long)_leafKeyModifierFlags;
-(unsigned long long)attributes;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)requiresAuthenticatedInput;
-(void)setState:(long long)arg1 ;
-(NSString *)discoverabilityTitle;
-(id)_leafKeyInput;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)handler;
-(BOOL)isLeaf;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isDefaultCommand;
-(unsigned long long)hash;
-(void)setAttributes:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 state:(long long)arg6 handler:(/*^block*/id)arg7 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(long long)state;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(id)_leafAlternates;
-(id)_spiRepresentation;
-(void)_performActionWithSender:(id)arg1 ;
@end

