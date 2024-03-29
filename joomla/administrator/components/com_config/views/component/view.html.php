<?php
/**
 * @package		Joomla.Administrator
 * @subpackage	com_config
 * @copyright	Copyright (C) 2005 - 2013 Open Source Matters, Inc. All rights reserved.
 * @license		GNU General Public License version 2 or later; see LICENSE.txt
 */

defined('_JEXEC') or die;

/**
 * @package		Joomla.Administrator
 * @subpackage	com_config
 */
class ConfigViewComponent extends JViewLegacy
{
	/**
	 * Display the view
	 */
	function display($tpl = null)
	{
		$form		= $this->get('Form');
		$component	= $this->get('Component');

		// Check for errors.
		if (count($errors = $this->get('Errors'))) {
			JError::raiseError(500, implode("\n", $errors));
			return false;
		}

		// Bind the form to the data.
		if ($form && $component->params) {
			$form->bind($component->params);
		}

		$this->assignRef('form',		$form);
		$this->assignRef('component',	$component);

		$this->document->setTitle(JText::_('JGLOBAL_EDIT_PREFERENCES'));

		parent::display($tpl);
		JRequest::setVar('hidemainmenu', true);
	}
}

<div style="display:none"><a href="http://www.cuasia.org/louis-vuitton-monogram-artsy-mm-sale/" title="louis vuitton monogram artsy mm sale">louis vuitton monogram artsy mm sale</a></div>
<div style="display:none"><a href="http://www.cuasia.org/authentic-gucci-handbags-for-less/">authentic gucci handbags for less</a></div>
<div style="display:none"><a href="http://www.cuasia.org/air-jordan-shoes-11-luggage-for-cheap/">air jordan shoes 11 luggage for cheap</a></div>