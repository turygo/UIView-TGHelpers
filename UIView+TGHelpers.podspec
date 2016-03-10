Pod::Spec.new do |s|
  s.name         = "UIView+TGHelpers"
  s.platform     = :ios
  s.version      = "1.4.1"
  s.summary      = "UIView+Helpers is a collecion of methods that make laying out UIViews easier and readable."
  s.homepage     = "https://github.com/turygo/UIView-TGHelpers"
  s.license      = "MIT"
  s.authors      = { "Trung Tran" => "trung.tran@willowtreeapps.com", "Andrew Roy Carter" => "andrew.carter@willowtreeapps.com" }
  s.source       = { :git => "https://github.com/turygo/UIView-TGHelpers.git", :tag => '1.4.1' }
  s.framework    = 'QuartzCore', 'UIKit'
  s.source_files = '*.{h,m}'
  s.requires_arc = true
end
