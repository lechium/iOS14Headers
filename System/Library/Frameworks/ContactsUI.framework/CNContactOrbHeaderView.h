/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CNContactFormatter, NSString, CNContactPhotoView, NSArray, NSMutableArray, NSDictionary, UILabel, UIView;

@interface CNContactOrbHeaderView : UIView {

	BOOL _centersPhotoAndLabels;
	BOOL _alwaysShowsMonogram;
	CNContactFormatter* _contactFormatter;
	NSString* _alternateName;
	NSString* _message;
	CNContactPhotoView* _photoView;
	NSArray* _contacts;
	NSMutableArray* _headerConstraints;
	NSDictionary* _nameTextAttributes;
	NSDictionary* _taglineTextAttributes;
	UILabel* _nameLabel;
	UILabel* _taglineLabel;
	UILabel* _fakeTaglineAlignmentLabel;
	UIView* _markerView;
	UIEdgeInsets _contentMargins;

}

@property (nonatomic,retain) NSMutableArray * headerConstraints;                 //@synthesize headerConstraints=_headerConstraints - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                 //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                    //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * taglineTextAttributes;                 //@synthesize taglineTextAttributes=_taglineTextAttributes - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * taglineLabel;                             //@synthesize taglineLabel=_taglineLabel - In the implementation block
@property (nonatomic,retain) UILabel * fakeTaglineAlignmentLabel;                //@synthesize fakeTaglineAlignmentLabel=_fakeTaglineAlignmentLabel - In the implementation block
@property (nonatomic,retain) UIView * markerView;                                //@synthesize markerView=_markerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentMargins;                        //@synthesize contentMargins=_contentMargins - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) NSString * alternateName;                           //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,retain) NSString * message;                                 //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL centersPhotoAndLabels;                         //@synthesize centersPhotoAndLabels=_centersPhotoAndLabels - In the implementation block
@property (nonatomic,readonly) double photoLabelSpacing; 
@property (nonatomic,readonly) CNContactPhotoView * photoView;                   //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowsMonogram;                           //@synthesize alwaysShowsMonogram=_alwaysShowsMonogram - In the implementation block
+(id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(BOOL)arg2 ;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1 ;
+(BOOL)requiresConstraintBasedLayout;
-(void)copy:(id)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(CNContactFormatter *)contactFormatter;
-(CNContactPhotoView *)photoView;
-(void)tintColorDidChange;
-(void)menuWillHide:(id)arg1 ;
-(UILabel *)taglineLabel;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(long long)arg3 ;
-(void)updateWithContacts:(id)arg1 ;
-(void)updateFontSizes;
-(void)setContentMargins:(UIEdgeInsets)arg1 ;
-(double)photoLabelSpacing;
-(void)setTaglineTextAttributes:(NSDictionary *)arg1 ;
-(void)updateConstraints;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(id)_headerStringForContacts:(id)arg1 ;
-(id)_taglineStringForContacts:(id)arg1 ;
-(void)handleNameLabelLongPress:(id)arg1 ;
-(UIEdgeInsets)contentMargins;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(BOOL)centersPhotoAndLabels;
-(void)setCentersPhotoAndLabels:(BOOL)arg1 ;
-(BOOL)alwaysShowsMonogram;
-(void)setMarkerView:(UIView *)arg1 ;
-(void)setAlwaysShowsMonogram:(BOOL)arg1 ;
-(NSMutableArray *)headerConstraints;
-(void)setHeaderConstraints:(NSMutableArray *)arg1 ;
-(NSDictionary *)nameTextAttributes;
-(NSDictionary *)taglineTextAttributes;
-(void)setTaglineLabel:(UILabel *)arg1 ;
-(UILabel *)fakeTaglineAlignmentLabel;
-(void)setFakeTaglineAlignmentLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(NSArray *)contacts;
-(void)setMessage:(NSString *)arg1 ;
-(void)reloadData;
-(UILabel *)nameLabel;
-(void)setContacts:(NSArray *)arg1 ;
-(UIView *)markerView;
-(NSString *)message;
-(void)setNameLabel:(UILabel *)arg1 ;
@end

